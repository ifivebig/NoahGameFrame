using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace NFCoreEx
{
    public class NFCElementManager : NFIElementManager
    {
        public NFCElementManager()
        {
            mhtObject = new Hashtable();
        }

        #region Instance
        private static NFIElementManager _Instance = null;
        public static NFIElementManager Instance
        {
            get
            {
                if (_Instance == null)
                {
                    _Instance = new NFCElementManager();
                }
                return _Instance;
            }
        }
        #endregion
        public override bool Load()
        {
            mstrRootPath = "";
            ClearInstanceElement();

            Hashtable xTable = NFCLogicClassManager.Instance.GetElementList();
            foreach (DictionaryEntry de in xTable)
            {
                NFILogicClass xLogicClass = (NFILogicClass)de.Value;
                LoadInstanceElement(xLogicClass);
            }

            return false;
        }

        public override bool Clear()
        {
            return false;
        }

        public override bool ExistElement(string strConfigName)
        {
            if (mhtObject.ContainsKey(strConfigName))
            {
                return true;
            }

            return false;
        }

        public override Int64 QueryPropertyInt(string strConfigName, string strPropertyName)
        {
            NFIElement xElement = GetElement(strConfigName);
            if (null != xElement)
            {
                return xElement.QueryInt(strPropertyName);
            }

            return 0;
        }

        public override float QueryPropertyFloat(string strConfigName, string strPropertyName)
        {
            NFIElement xElement = GetElement(strConfigName);
            if (null != xElement)
            {
                 return xElement.QueryFloat(strPropertyName);
            }

            return 0;
        }

        public override double QueryPropertyDouble(string strConfigName, string strPropertyName)
        {
            NFIElement xElement = GetElement(strConfigName);
            if (null != xElement)
            {
                xElement.QueryDouble(strPropertyName);
            }

            return 0;
        }

        public override string QueryPropertyString(string strConfigName, string strPropertyName)
        {
            NFIElement xElement = GetElement(strConfigName);
            if (null != xElement)
            {
                return xElement.QueryString(strPropertyName);
            }

            return "";
        }

        public override bool AddElement(string strName, NFIElement xElement)
        {
            if (!mhtObject.ContainsKey(strName))
            {
                mhtObject.Add(strName, xElement);

                return true;
            }

            return false;
        }

        public override NFIElement GetElement(string strConfigName)
        {
            if (mhtObject.ContainsKey(strConfigName))
            {
                return (NFIElement)mhtObject[strConfigName];
            }

            return null;
        }

        private void ClearInstanceElement()
        {
            mhtObject.Clear();
        }

        private void LoadInstanceElement(NFILogicClass xLogicClass)
        {
            string strLogicPath = mstrRootPath;
            strLogicPath += xLogicClass.GetInstance();

            XmlDocument xmldoc = new XmlDocument();
            xmldoc.Load(strLogicPath);

            XmlNode xRoot = xmldoc.SelectSingleNode("XML");

            XmlNodeList xNodeList = xRoot.SelectNodes("Object");
            for (int i = 0; i < xNodeList.Count; ++i)
            {
                //NFCLog.Instance.Log("Class:" + xLogicClass.GetName());

                XmlNode xNodeClass = xNodeList.Item(i);
                XmlAttribute strID = xNodeClass.Attributes["ID"];

                //NFCLog.Instance.Log("ClassID:" + strID.Value);

                NFIElement xElement = GetElement(strID.Value);
                if (null == xElement)
                {
                    xElement = new NFCElement();
                    AddElement(strID.Value, xElement);
                    xLogicClass.AddConfigName(strID.Value);

                    XmlAttributeCollection xCollection = xNodeClass.Attributes;
                    for (int j = 0; j < xCollection.Count; ++j)
                    {
                        XmlAttribute xAttribute = xCollection[j];
                        NFIProperty xProperty = xLogicClass.GetPropertyManager().GetProperty(xAttribute.Name);
                        if (null != xProperty)
                        {
                            NFIDataList.VARIANT_TYPE eType = xProperty.GetType();
                            switch (eType)
                            {
                                case NFIDataList.VARIANT_TYPE.VTYPE_INT:
                                    {
                                        NFIDataList xValue = new NFCDataList();
                                        xValue.AddInt(int.Parse(xAttribute.Value));
                                        xElement.GetPropertyManager().AddProperty(xAttribute.Name, xValue);
                                    }
                                    break;
                                case NFIDataList.VARIANT_TYPE.VTYPE_FLOAT:
                                    {
                                        NFIDataList xValue = new NFCDataList();
                                        xValue.AddFloat(float.Parse(xAttribute.Value));
                                        xElement.GetPropertyManager().AddProperty(xAttribute.Name, xValue);
                                    }
                                    break;
                                case NFIDataList.VARIANT_TYPE.VTYPE_DOUBLE:
                                    {
                                        NFIDataList xValue = new NFCDataList();
                                        xValue.AddDouble(double.Parse(xAttribute.Value));
                                        xElement.GetPropertyManager().AddProperty(xAttribute.Name, xValue);
                                    }
                                    break;
                                case NFIDataList.VARIANT_TYPE.VTYPE_STRING:
                                    {
                                        NFIDataList xValue = new NFCDataList();
                                        xValue.AddString(xAttribute.Value);
                                        NFIProperty xTestProperty = xElement.GetPropertyManager().AddProperty(xAttribute.Name, xValue);
                                    }
                                    break;
                                case NFIDataList.VARIANT_TYPE.VTYPE_OBJECT:
                                    {
                                        NFIDataList xValue = new NFCDataList();
                                        xValue.AddObject(new NFIDENTID(0, int.Parse(xAttribute.Value)));
                                        xElement.GetPropertyManager().AddProperty(xAttribute.Name, xValue);
                                    }
                                    break;
                                default:
                                    break;
                            }
                        }
                    }
                }
            }
        }

        /////////////////////////////////////////
        private Hashtable mhtObject;
        private string mstrRootPath;
    }
}
/* -------------------------------------------------------------------------
//  File        :   xml_produce_ui.h
//  Author      :   Sum
//  Datet       :   2013/9/7 15:49
//  Brief       :   
//
// -----------------------------------------------------------------------*/
#ifndef __XML_PRODUCE_UI_H_
#define __XML_PRODUCE_UI_H_

#include "include/utils.h"
#include "i_xml_produce.h"

class UIXmlProduce : public IXmlProduce
{
public:
    UIXmlProduce();

    virtual ~UIXmlProduce();

    virtual Global::BOOL Produce(const KControlNode& controltree,
        const std::wstring& strPath);

private:
    Global::BOOL _Produce(const KControlNode& controltree,
        const std::wstring& strPath);

    Global::BOOL _AddXml(const KControlNode& controltree,
        TiXmlElement* pNode);
};

#endif // __XML_PRODUCE_UI_H_
/*
 * SamiUnit.h
 * 
 * 
 */

#ifndef SamiUnit_H_
#define SamiUnit_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiConversionStep.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiUnit: public SamiObject {
public:
    SamiUnit();
    SamiUnit(String* json);
    virtual ~SamiUnit();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUnit* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);
    String* getPAbbreviatedName();
    void setPAbbreviatedName(String* pAbbreviatedName);
    String* getPCategory();
    void setPCategory(String* pCategory);
    Double* getPMinimumValue();
    void setPMinimumValue(Double* pMinimumValue);
    Double* getPMaximumValue();
    void setPMaximumValue(Double* pMaximumValue);
    IList* getPConversionSteps();
    void setPConversionSteps(IList* pConversionSteps);

private:
    String* pName;
String* pAbbreviatedName;
String* pCategory;
Double* pMinimumValue;
Double* pMaximumValue;
IList* pConversionSteps;
};

} /* namespace Swagger */

#endif /* SamiUnit_H_ */

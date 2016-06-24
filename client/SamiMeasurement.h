/*
 * SamiMeasurement.h
 * 
 * 
 */

#ifndef SamiMeasurement_H_
#define SamiMeasurement_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiHumanTime.h"
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiMeasurement: public SamiObject {
public:
    SamiMeasurement();
    SamiMeasurement(String* json);
    virtual ~SamiMeasurement();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurement* fromJson(String* obj);

    String* getPVariable();
    void setPVariable(String* pVariable);
    String* getPSource();
    void setPSource(String* pSource);
    String* getPStartTime();
    void setPStartTime(String* pStartTime);
    SamiHumanTime* getPHumanTime();
    void setPHumanTime(SamiHumanTime* pHumanTime);
    Double* getPValue();
    void setPValue(Double* pValue);
    String* getPUnit();
    void setPUnit(String* pUnit);
    Integer* getPOriginalValue();
    void setPOriginalValue(Integer* pOriginalValue);
    Double* getPStoredValue();
    void setPStoredValue(Double* pStoredValue);
    String* getPStoredAbbreviatedUnitName();
    void setPStoredAbbreviatedUnitName(String* pStoredAbbreviatedUnitName);
    String* getPOriginalAbbreviatedUnitName();
    void setPOriginalAbbreviatedUnitName(String* pOriginalAbbreviatedUnitName);
    String* getPAbbreviatedUnitName();
    void setPAbbreviatedUnitName(String* pAbbreviatedUnitName);
    String* getPNote();
    void setPNote(String* pNote);

private:
    String* pVariable;
String* pSource;
String* pStartTime;
SamiHumanTime* pHumanTime;
Double* pValue;
String* pUnit;
Integer* pOriginalValue;
Double* pStoredValue;
String* pStoredAbbreviatedUnitName;
String* pOriginalAbbreviatedUnitName;
String* pAbbreviatedUnitName;
String* pNote;
};

} /* namespace Swagger */

#endif /* SamiMeasurement_H_ */

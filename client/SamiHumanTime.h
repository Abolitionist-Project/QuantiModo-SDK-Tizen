/*
 * SamiHumanTime.h
 * 
 * 
 */

#ifndef SamiHumanTime_H_
#define SamiHumanTime_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiHumanTime: public SamiObject {
public:
    SamiHumanTime();
    SamiHumanTime(String* json);
    virtual ~SamiHumanTime();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiHumanTime* fromJson(String* obj);

    String* getPDate();
    void setPDate(String* pDate);
    Integer* getPTimezoneType();
    void setPTimezoneType(Integer* pTimezone_type);
    String* getPTimezone();
    void setPTimezone(String* pTimezone);

private:
    String* pDate;
Integer* pTimezone_type;
String* pTimezone;
};

} /* namespace Swagger */

#endif /* SamiHumanTime_H_ */

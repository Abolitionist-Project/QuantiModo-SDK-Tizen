/*
 * SamiVariableUserSource.h
 * 
 * 
 */

#ifndef SamiVariableUserSource_H_
#define SamiVariableUserSource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::Integer;


namespace Swagger {

class SamiVariableUserSource: public SamiObject {
public:
    SamiVariableUserSource();
    SamiVariableUserSource(String* json);
    virtual ~SamiVariableUserSource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariableUserSource* fromJson(String* obj);

    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariable_id);
    Integer* getPSourceId();
    void setPSourceId(Integer* pSource_id);
    Integer* getPTimestamp();
    void setPTimestamp(Integer* pTimestamp);
    Integer* getPEarliestMeasurementTime();
    void setPEarliestMeasurementTime(Integer* pEarliest_measurement_time);
    Integer* getPLatestMeasurementTime();
    void setPLatestMeasurementTime(Integer* pLatest_measurement_time);
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);

private:
    Integer* pUser_id;
Integer* pVariable_id;
Integer* pSource_id;
Integer* pTimestamp;
Integer* pEarliest_measurement_time;
Integer* pLatest_measurement_time;
DateTime* pCreated_at;
DateTime* pUpdated_at;
};

} /* namespace Swagger */

#endif /* SamiVariableUserSource_H_ */

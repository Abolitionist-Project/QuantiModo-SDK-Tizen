/*
 * SamiTrackingReminderDelete.h
 * 
 * 
 */

#ifndef SamiTrackingReminderDelete_H_
#define SamiTrackingReminderDelete_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiTrackingReminderDelete: public SamiObject {
public:
    SamiTrackingReminderDelete();
    SamiTrackingReminderDelete(String* json);
    virtual ~SamiTrackingReminderDelete();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTrackingReminderDelete* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);

private:
    Integer* pId;
};

} /* namespace Swagger */

#endif /* SamiTrackingReminderDelete_H_ */

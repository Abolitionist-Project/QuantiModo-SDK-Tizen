/*
 * SamiUpdate.h
 * 
 * 
 */

#ifndef SamiUpdate_H_
#define SamiUpdate_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::DateTime;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiUpdate: public SamiObject {
public:
    SamiUpdate();
    SamiUpdate(String* json);
    virtual ~SamiUpdate();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUpdate* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    Integer* getPConnectorId();
    void setPConnectorId(Integer* pConnector_id);
    Integer* getPNumberOfMeasurements();
    void setPNumberOfMeasurements(Integer* pNumber_of_measurements);
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    String* getPMessage();
    void setPMessage(String* pMessage);
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);

private:
    Integer* pId;
Integer* pUser_id;
Integer* pConnector_id;
Integer* pNumber_of_measurements;
Boolean* pSuccess;
String* pMessage;
DateTime* pCreated_at;
DateTime* pUpdated_at;
};

} /* namespace Swagger */

#endif /* SamiUpdate_H_ */

/*
 * SamiConnection.h
 * 
 * 
 */

#ifndef SamiConnection_H_
#define SamiConnection_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiConnection: public SamiObject {
public:
    SamiConnection();
    SamiConnection(String* json);
    virtual ~SamiConnection();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConnection* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    Integer* getPConnectorId();
    void setPConnectorId(Integer* pConnector_id);
    String* getPConnectStatus();
    void setPConnectStatus(String* pConnect_status);
    String* getPConnectError();
    void setPConnectError(String* pConnect_error);
    DateTime* getPUpdateRequestedAt();
    void setPUpdateRequestedAt(DateTime* pUpdate_requested_at);
    String* getPUpdateStatus();
    void setPUpdateStatus(String* pUpdate_status);
    String* getPUpdateError();
    void setPUpdateError(String* pUpdate_error);
    DateTime* getPLastSuccessfulUpdatedAt();
    void setPLastSuccessfulUpdatedAt(DateTime* pLast_successful_updated_at);
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);

private:
    Integer* pId;
Integer* pUser_id;
Integer* pConnector_id;
String* pConnect_status;
String* pConnect_error;
DateTime* pUpdate_requested_at;
String* pUpdate_status;
String* pUpdate_error;
DateTime* pLast_successful_updated_at;
DateTime* pCreated_at;
DateTime* pUpdated_at;
};

} /* namespace Swagger */

#endif /* SamiConnection_H_ */

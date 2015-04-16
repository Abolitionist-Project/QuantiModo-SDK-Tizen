/*
 * SamiUserTokenSuccessfulResponse.h
 * 
 * 
 */

#ifndef SamiUserTokenSuccessfulResponse_H_
#define SamiUserTokenSuccessfulResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
#include "SamiUserTokenSuccessfulResponseInnerUserField.h"
using Tizen::Base::String;


namespace Swagger {

class SamiUserTokenSuccessfulResponse: public SamiObject {
public:
    SamiUserTokenSuccessfulResponse();
    SamiUserTokenSuccessfulResponse(String* json);
    virtual ~SamiUserTokenSuccessfulResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserTokenSuccessfulResponse* fromJson(String* obj);

    
    Integer* getPCode();
    void setPCode(Integer* pCode);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    
    SamiUserTokenSuccessfulResponseInnerUserField* getPUser();
    void setPUser(SamiUserTokenSuccessfulResponseInnerUserField* pUser);
    

private:
    Integer* pCode;
    String* pMessage;
    SamiUserTokenSuccessfulResponseInnerUserField* pUser;
    
};

} /* namespace Swagger */

#endif /* SamiUserTokenSuccessfulResponse_H_ */

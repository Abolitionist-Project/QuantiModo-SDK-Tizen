/*
 * SamiUserTokenFailedResponse.h
 * 
 * 
 */

#ifndef SamiUserTokenFailedResponse_H_
#define SamiUserTokenFailedResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiUserTokenFailedResponse: public SamiObject {
public:
    SamiUserTokenFailedResponse();
    SamiUserTokenFailedResponse(String* json);
    virtual ~SamiUserTokenFailedResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserTokenFailedResponse* fromJson(String* obj);

    
    Integer* getPCode();
    void setPCode(Integer* pCode);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    Integer* pCode;
    String* pMessage;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiUserTokenFailedResponse_H_ */

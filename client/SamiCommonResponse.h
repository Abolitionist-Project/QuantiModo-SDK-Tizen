/*
 * SamiCommonResponse.h
 * 
 * 
 */

#ifndef SamiCommonResponse_H_
#define SamiCommonResponse_H_

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

class SamiCommonResponse: public SamiObject {
public:
    SamiCommonResponse();
    SamiCommonResponse(String* json);
    virtual ~SamiCommonResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCommonResponse* fromJson(String* obj);

    
    Integer* getPStatus();
    void setPStatus(Integer* pStatus);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    Integer* pStatus;
    String* pMessage;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiCommonResponse_H_ */

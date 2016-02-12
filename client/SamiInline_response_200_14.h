/*
 * SamiInline_response_200_14.h
 * 
 * 
 */

#ifndef SamiInline_response_200_14_H_
#define SamiInline_response_200_14_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiConnection.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_14: public SamiObject {
public:
    SamiInline_response_200_14();
    SamiInline_response_200_14(String* json);
    virtual ~SamiInline_response_200_14();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_14* fromJson(String* obj);

    
    SamiConnection* getPData();
    void setPData(SamiConnection* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiConnection* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_14_H_ */

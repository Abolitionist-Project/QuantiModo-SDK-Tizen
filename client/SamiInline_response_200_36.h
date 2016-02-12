/*
 * SamiInline_response_200_36.h
 * 
 * 
 */

#ifndef SamiInline_response_200_36_H_
#define SamiInline_response_200_36_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiVote.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_36: public SamiObject {
public:
    SamiInline_response_200_36();
    SamiInline_response_200_36(String* json);
    virtual ~SamiInline_response_200_36();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_36* fromJson(String* obj);

    
    SamiVote* getPData();
    void setPData(SamiVote* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiVote* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_36_H_ */

/*
 * SamiVote.h
 * 
 * 
 */

#ifndef SamiVote_H_
#define SamiVote_H_

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

class SamiVote: public SamiObject {
public:
    SamiVote();
    SamiVote(String* json);
    virtual ~SamiVote();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVote* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPClientId();
    void setPClientId(String* pClient_id);
    
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    
    Integer* getPCauseId();
    void setPCauseId(Integer* pCause_id);
    
    Integer* getPEffectId();
    void setPEffectId(Integer* pEffect_id);
    
    Integer* getPValue();
    void setPValue(Integer* pValue);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pId;
    String* pClient_id;
    Integer* pUser_id;
    Integer* pCause_id;
    Integer* pEffect_id;
    Integer* pValue;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiVote_H_ */

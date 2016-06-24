/*
 * SamiPostVote.h
 * 
 * 
 */

#ifndef SamiPostVote_H_
#define SamiPostVote_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiPostVote: public SamiObject {
public:
    SamiPostVote();
    SamiPostVote(String* json);
    virtual ~SamiPostVote();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPostVote* fromJson(String* obj);

    String* getPCause();
    void setPCause(String* pCause);
    String* getPEffect();
    void setPEffect(String* pEffect);
    Boolean* getPVote();
    void setPVote(Boolean* pVote);

private:
    String* pCause;
String* pEffect;
Boolean* pVote;
};

} /* namespace Swagger */

#endif /* SamiPostVote_H_ */

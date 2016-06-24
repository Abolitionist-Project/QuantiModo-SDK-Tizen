/*
 * SamiVoteDelete.h
 * 
 * 
 */

#ifndef SamiVoteDelete_H_
#define SamiVoteDelete_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiVoteDelete: public SamiObject {
public:
    SamiVoteDelete();
    SamiVoteDelete(String* json);
    virtual ~SamiVoteDelete();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVoteDelete* fromJson(String* obj);

    String* getPCause();
    void setPCause(String* pCause);
    String* getPEffect();
    void setPEffect(String* pEffect);

private:
    String* pCause;
String* pEffect;
};

} /* namespace Swagger */

#endif /* SamiVoteDelete_H_ */

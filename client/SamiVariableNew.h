/*
 * SamiVariableNew.h
 * 
 * 
 */

#ifndef SamiVariableNew_H_
#define SamiVariableNew_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiVariableNew: public SamiObject {
public:
    SamiVariableNew();
    SamiVariableNew(String* json);
    virtual ~SamiVariableNew();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariableNew* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);
    String* getPCategory();
    void setPCategory(String* pCategory);
    String* getPUnit();
    void setPUnit(String* pUnit);
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombinationOperation);
    String* getPParent();
    void setPParent(String* pParent);

private:
    String* pName;
String* pCategory;
String* pUnit;
String* pCombinationOperation;
String* pParent;
};

} /* namespace Swagger */

#endif /* SamiVariableNew_H_ */

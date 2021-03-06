/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIOrderNewSingleRequest.h
 *
 * The new order message.
 */

#ifndef OAIOrderNewSingleRequest_H
#define OAIOrderNewSingleRequest_H

#include <QJsonObject>

#include "OAIOrdSide.h"
#include "OAIOrdType.h"
#include "OAITimeInForce.h"
#include <QDate>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrderNewSingleRequest : public OAIObject {
public:
    OAIOrderNewSingleRequest();
    OAIOrderNewSingleRequest(QString json);
    ~OAIOrderNewSingleRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getExchangeId() const;
    void setExchangeId(const QString &exchange_id);
    bool is_exchange_id_Set() const;
    bool is_exchange_id_Valid() const;

    QString getClientOrderId() const;
    void setClientOrderId(const QString &client_order_id);
    bool is_client_order_id_Set() const;
    bool is_client_order_id_Valid() const;

    QString getSymbolIdExchange() const;
    void setSymbolIdExchange(const QString &symbol_id_exchange);
    bool is_symbol_id_exchange_Set() const;
    bool is_symbol_id_exchange_Valid() const;

    QString getSymbolIdCoinapi() const;
    void setSymbolIdCoinapi(const QString &symbol_id_coinapi);
    bool is_symbol_id_coinapi_Set() const;
    bool is_symbol_id_coinapi_Valid() const;

    double getAmountOrder() const;
    void setAmountOrder(const double &amount_order);
    bool is_amount_order_Set() const;
    bool is_amount_order_Valid() const;

    double getPrice() const;
    void setPrice(const double &price);
    bool is_price_Set() const;
    bool is_price_Valid() const;

    OAIOrdSide getSide() const;
    void setSide(const OAIOrdSide &side);
    bool is_side_Set() const;
    bool is_side_Valid() const;

    OAIOrdType getOrderType() const;
    void setOrderType(const OAIOrdType &order_type);
    bool is_order_type_Set() const;
    bool is_order_type_Valid() const;

    OAITimeInForce getTimeInForce() const;
    void setTimeInForce(const OAITimeInForce &time_in_force);
    bool is_time_in_force_Set() const;
    bool is_time_in_force_Valid() const;

    QDate getExpireTime() const;
    void setExpireTime(const QDate &expire_time);
    bool is_expire_time_Set() const;
    bool is_expire_time_Valid() const;

    QList<QString> getExecInst() const;
    void setExecInst(const QList<QString> &exec_inst);
    bool is_exec_inst_Set() const;
    bool is_exec_inst_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString exchange_id;
    bool m_exchange_id_isSet;
    bool m_exchange_id_isValid;

    QString client_order_id;
    bool m_client_order_id_isSet;
    bool m_client_order_id_isValid;

    QString symbol_id_exchange;
    bool m_symbol_id_exchange_isSet;
    bool m_symbol_id_exchange_isValid;

    QString symbol_id_coinapi;
    bool m_symbol_id_coinapi_isSet;
    bool m_symbol_id_coinapi_isValid;

    double amount_order;
    bool m_amount_order_isSet;
    bool m_amount_order_isValid;

    double price;
    bool m_price_isSet;
    bool m_price_isValid;

    OAIOrdSide side;
    bool m_side_isSet;
    bool m_side_isValid;

    OAIOrdType order_type;
    bool m_order_type_isSet;
    bool m_order_type_isValid;

    OAITimeInForce time_in_force;
    bool m_time_in_force_isSet;
    bool m_time_in_force_isValid;

    QDate expire_time;
    bool m_expire_time_isSet;
    bool m_expire_time_isValid;

    QList<QString> exec_inst;
    bool m_exec_inst_isSet;
    bool m_exec_inst_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderNewSingleRequest)

#endif // OAIOrderNewSingleRequest_H

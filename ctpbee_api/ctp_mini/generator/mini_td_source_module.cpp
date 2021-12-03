.def("reqAuthenticate", &TdApi::reqAuthenticate)
.def("reqUserLogin", &TdApi::reqUserLogin)
.def("reqUserLoginEncrypt", &TdApi::reqUserLoginEncrypt)
.def("reqUserLogout", &TdApi::reqUserLogout)
.def("reqOrderInsert", &TdApi::reqOrderInsert)
.def("reqOrderAction", &TdApi::reqOrderAction)
.def("reqExecOrderInsert", &TdApi::reqExecOrderInsert)
.def("reqExecOrderAction", &TdApi::reqExecOrderAction)
.def("reqForQuoteInsert", &TdApi::reqForQuoteInsert)
.def("reqQuoteInsert", &TdApi::reqQuoteInsert)
.def("reqQuoteAction", &TdApi::reqQuoteAction)
.def("reqBatchOrderAction", &TdApi::reqBatchOrderAction)
.def("reqOptionSelfCloseInsert", &TdApi::reqOptionSelfCloseInsert)
.def("reqOptionSelfCloseAction", &TdApi::reqOptionSelfCloseAction)
.def("reqCombActionInsert", &TdApi::reqCombActionInsert)
.def("reqQryOrder", &TdApi::reqQryOrder)
.def("reqQryTrade", &TdApi::reqQryTrade)
.def("reqQryInvestorPosition", &TdApi::reqQryInvestorPosition)
.def("reqQryTradingAccount", &TdApi::reqQryTradingAccount)
.def("reqQryInvestor", &TdApi::reqQryInvestor)
.def("reqQryTradingCode", &TdApi::reqQryTradingCode)
.def("reqQryInstrumentMarginRate", &TdApi::reqQryInstrumentMarginRate)
.def("reqQryInstrumentCommissionRate", &TdApi::reqQryInstrumentCommissionRate)
.def("reqQryExchange", &TdApi::reqQryExchange)
.def("reqQryProduct", &TdApi::reqQryProduct)
.def("reqQryInstrument", &TdApi::reqQryInstrument)
.def("reqQryCombInstrument", &TdApi::reqQryCombInstrument)
.def("reqQryInvestorPositionForComb", &TdApi::reqQryInvestorPositionForComb)
.def("reqQryCombAction", &TdApi::reqQryCombAction)
.def("reqQryDepthMarketData", &TdApi::reqQryDepthMarketData)
.def("reqQryOptionSelfClose", &TdApi::reqQryOptionSelfClose)
.def("reqQryInstrumentStatus", &TdApi::reqQryInstrumentStatus)
.def("reqQryInvestorPositionDetail", &TdApi::reqQryInvestorPositionDetail)
.def("reqQryInvestorPositionCombineDetail", &TdApi::reqQryInvestorPositionCombineDetail)
.def("reqQryExchangeMarginRate", &TdApi::reqQryExchangeMarginRate)
.def("reqQryExchangeMarginRateAdjust", &TdApi::reqQryExchangeMarginRateAdjust)
.def("reqQryOptionInstrTradeCost", &TdApi::reqQryOptionInstrTradeCost)
.def("reqQryOptionInstrCommRate", &TdApi::reqQryOptionInstrCommRate)
.def("reqQryExecOrder", &TdApi::reqQryExecOrder)
.def("reqQryForQuote", &TdApi::reqQryForQuote)
.def("reqQryQuote", &TdApi::reqQryQuote)
.def("reqQryInstrumentOrderCommRate", &TdApi::reqQryInstrumentOrderCommRate)

.def("onFrontConnected", &TdApi::onFrontConnected)
.def("onFrontDisconnected", &TdApi::onFrontDisconnected)
.def("onHeartBeatWarning", &TdApi::onHeartBeatWarning)
.def("onRspAuthenticate", &TdApi::onRspAuthenticate)
.def("onRspUserLogin", &TdApi::onRspUserLogin)
.def("onRspUserLogout", &TdApi::onRspUserLogout)
.def("onRspOrderInsert", &TdApi::onRspOrderInsert)
.def("onRspOrderAction", &TdApi::onRspOrderAction)
.def("onRspExecOrderInsert", &TdApi::onRspExecOrderInsert)
.def("onRspExecOrderAction", &TdApi::onRspExecOrderAction)
.def("onRspForQuoteInsert", &TdApi::onRspForQuoteInsert)
.def("onRspQuoteInsert", &TdApi::onRspQuoteInsert)
.def("onRspQuoteAction", &TdApi::onRspQuoteAction)
.def("onRspBatchOrderAction", &TdApi::onRspBatchOrderAction)
.def("onRspOptionSelfCloseInsert", &TdApi::onRspOptionSelfCloseInsert)
.def("onRspOptionSelfCloseAction", &TdApi::onRspOptionSelfCloseAction)
.def("onRspCombActionInsert", &TdApi::onRspCombActionInsert)
.def("onRspQryOrder", &TdApi::onRspQryOrder)
.def("onRspQryTrade", &TdApi::onRspQryTrade)
.def("onRspQryInvestorPosition", &TdApi::onRspQryInvestorPosition)
.def("onRspQryTradingAccount", &TdApi::onRspQryTradingAccount)
.def("onRspQryInvestor", &TdApi::onRspQryInvestor)
.def("onRspQryTradingCode", &TdApi::onRspQryTradingCode)
.def("onRspQryInstrumentMarginRate", &TdApi::onRspQryInstrumentMarginRate)
.def("onRspQryInstrumentCommissionRate", &TdApi::onRspQryInstrumentCommissionRate)
.def("onRspQryExchange", &TdApi::onRspQryExchange)
.def("onRspQryProduct", &TdApi::onRspQryProduct)
.def("onRspQryInstrument", &TdApi::onRspQryInstrument)
.def("onRspQryCombInstrument", &TdApi::onRspQryCombInstrument)
.def("onRspQryCombAction", &TdApi::onRspQryCombAction)
.def("onRspQryInvestorPositionForComb", &TdApi::onRspQryInvestorPositionForComb)
.def("onRspQryDepthMarketData", &TdApi::onRspQryDepthMarketData)
.def("onRspQryInstrumentStatus", &TdApi::onRspQryInstrumentStatus)
.def("onRspQryInvestorPositionDetail", &TdApi::onRspQryInvestorPositionDetail)
.def("onRspQryInvestorPositionCombineDetail", &TdApi::onRspQryInvestorPositionCombineDetail)
.def("onRspQryExchangeMarginRate", &TdApi::onRspQryExchangeMarginRate)
.def("onRspQryExchangeMarginRateAdjust", &TdApi::onRspQryExchangeMarginRateAdjust)
.def("onRspQryOptionInstrTradeCost", &TdApi::onRspQryOptionInstrTradeCost)
.def("onRspQryOptionInstrCommRate", &TdApi::onRspQryOptionInstrCommRate)
.def("onRspQryExecOrder", &TdApi::onRspQryExecOrder)
.def("onRspQryForQuote", &TdApi::onRspQryForQuote)
.def("onRspQryQuote", &TdApi::onRspQryQuote)
.def("onRspQryOptionSelfClose", &TdApi::onRspQryOptionSelfClose)
.def("onRspError", &TdApi::onRspError)
.def("onRtnOrder", &TdApi::onRtnOrder)
.def("onRtnTrade", &TdApi::onRtnTrade)
.def("onErrRtnOrderInsert", &TdApi::onErrRtnOrderInsert)
.def("onErrRtnOrderAction", &TdApi::onErrRtnOrderAction)
.def("onRtnInstrumentStatus", &TdApi::onRtnInstrumentStatus)
.def("onRtnExecOrder", &TdApi::onRtnExecOrder)
.def("onErrRtnExecOrderInsert", &TdApi::onErrRtnExecOrderInsert)
.def("onErrRtnExecOrderAction", &TdApi::onErrRtnExecOrderAction)
.def("onErrRtnForQuoteInsert", &TdApi::onErrRtnForQuoteInsert)
.def("onRtnQuote", &TdApi::onRtnQuote)
.def("onErrRtnQuoteInsert", &TdApi::onErrRtnQuoteInsert)
.def("onErrRtnQuoteAction", &TdApi::onErrRtnQuoteAction)
.def("onRtnForQuoteRsp", &TdApi::onRtnForQuoteRsp)
.def("onErrRtnBatchOrderAction", &TdApi::onErrRtnBatchOrderAction)
.def("onRtnOptionSelfClose", &TdApi::onRtnOptionSelfClose)
.def("onErrRtnOptionSelfCloseInsert", &TdApi::onErrRtnOptionSelfCloseInsert)
.def("onErrRtnOptionSelfCloseAction", &TdApi::onErrRtnOptionSelfCloseAction)
.def("onRtnCombAction", &TdApi::onRtnCombAction)
.def("onRspQryInstrumentOrderCommRate", &TdApi::onRspQryInstrumentOrderCommRate)
;

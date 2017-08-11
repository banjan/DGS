PrepareOrderForDelivery()
{
	lr_start_transaction("OrderService_PrepareOrderForDelivery");

	web_service_call( "StepName=PrepareOrderForDelivery_101",
		"SOAPMethod=OrderService|OrderService_HTTP|PrepareOrderForDelivery",
		"ResponseParam=response",
		"Service=OrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487798036.inf",
		BEGIN_ARGUMENTS,
		"OrderRequestGUID=fa260bbb-30c0-4124-95da-7be4e260a6d5",
		"PartnerKey=TEST-US",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>ebab6a4d-4f04-4edb-9211-790a49e9de65</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OrderService_PrepareOrderForDelivery", LR_AUTO);

	return 0;
}

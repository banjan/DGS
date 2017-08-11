GetPastSkuList()
{
	lr_start_transaction("StoreService_GetPastSkuList");

	web_service_call( "StepName=GetPastSkuList_101",
		"SOAPMethod=StoreService|StoreService|GetPastSkuList",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486585306.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerId>123456789</CustomerId>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_GetPastSkuList", LR_AUTO);

	return 0;
}

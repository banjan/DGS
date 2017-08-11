CompleteOrder()
{
	lr_start_transaction("OrderService_CompleteOrder");

	web_service_call( "StepName=CompleteOrder_101",
		"SOAPMethod=OrderService|OrderService_HTTP|CompleteOrder",
		"ResponseParam=response",
		"Service=OrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485882793.inf",
		BEGIN_ARGUMENTS,
		"OrderRequestGUID=bde5c644-adf3-494d-a447-17cdd0a94e43",
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

	lr_end_transaction("OrderService_CompleteOrder", LR_AUTO);

	return 0;
}

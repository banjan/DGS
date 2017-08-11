GetPointsBalance()
{
	lr_start_transaction("LoyaltyService_GetPointsBalance");

	web_service_call( "StepName=GetPointsBalance_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetPointsBalance",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484856561.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1276939253</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetPointsBalance", LR_AUTO);

	return 0;
}

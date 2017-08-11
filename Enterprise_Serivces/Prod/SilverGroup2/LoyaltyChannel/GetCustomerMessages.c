GetCustomerMessages()
{
	lr_start_transaction("LoyaltyService_GetCustomerMessages");

	web_service_call( "StepName=GetCustomerMessages_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetCustomerMessages",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484855945.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1276939253</CustomerID>"
				"<IsMobile>false</IsMobile>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetCustomerMessages", LR_AUTO);

	return 0;
}

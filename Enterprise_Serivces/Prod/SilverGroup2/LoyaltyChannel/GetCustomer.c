GetCustomer()
{
	lr_start_transaction("LoyaltyService_GetCustomer");

	web_service_call( "StepName=GetCustomer_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetCustomer",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484847215.inf",
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
	
	lr_end_transaction("LoyaltyService_GetCustomer", LR_AUTO);

	return 0;
}

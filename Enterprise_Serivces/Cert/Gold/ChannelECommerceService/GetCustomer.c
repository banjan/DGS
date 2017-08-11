GetCustomer()
{
	lr_start_transaction("ECommerceService_GetCustomer");

	web_service_call( "StepName=GetCustomer_101",
		"SOAPMethod=ECommerceService|ECommerceService|GetCustomer",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484872320.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1257090663</CustomerID>"
				"<EdgeID nil=\"true\"></EdgeID>"
				"<EmailAddress nil=\"true\"></EmailAddress>"
				"<LoyaltyCardNumber nil=\"true\"></LoyaltyCardNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("ECommerceService_GetCustomer", LR_AUTO);

	return 0;
}

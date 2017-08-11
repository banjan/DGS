GetCustomerStatusByLoyaltyNumber()
{
	lr_start_transaction("CustomerService_GetCustomerStatusByLoyaltyNumber");

	web_service_call( "StepName=GetCustomerStatusByLoyaltyNumber_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|GetCustomerStatusByLoyaltyNumber",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484933001.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<LoyaltyNumber>3875154232766</LoyaltyNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_GetCustomerStatusByLoyaltyNumber", LR_AUTO);

	return 0;
}

ValidateCustomerForEnrollment()
{
	lr_start_transaction("CustomerService_ValidateCustomerForEnrollment");

	web_service_call( "StepName=ValidateCustomerForEnrollment_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|ValidateCustomerForEnrollment",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484934032.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<EmailAddress>efb351c3-08b3-45b2-9d3f-b02d26ea815a@gs.com</EmailAddress>"
				"<LoyaltyCardNumber>3875540382291</LoyaltyCardNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_ValidateCustomerForEnrollment", LR_AUTO);

	return 0;
}

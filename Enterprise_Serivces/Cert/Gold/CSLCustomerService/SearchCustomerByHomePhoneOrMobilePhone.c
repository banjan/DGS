SearchCustomerByHomePhoneOrMobilePhone()
{
	lr_start_transaction("CustomerService_SearchCustomerByHomePhoneOrMobilePhone");

	web_service_call( "StepName=SearchCustomerByHomePhoneOrMobilePhone_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|SearchCustomerByHomePhoneOrMobilePhone",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486569025.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<PhoneNumber>8174242000</PhoneNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_SearchCustomerByHomePhoneOrMobilePhone", LR_AUTO);

	return 0;
}

SearchCustomerByCustomerLastNameAndZipCode()
{
	lr_start_transaction("CustomerService_SearchCustomerByCustomerByLastNameAndZipCode");

	web_service_call( "StepName=SearchCustomerByCustomerByLastNameAndZipCode_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|SearchCustomerByCustomerByLastNameAndZipCode",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484933669.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<LastName>Smith</LastName>"
				"<ZipCode>75051</ZipCode>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_SearchCustomerByCustomerByLastNameAndZipCode", LR_AUTO);

	return 0;
}

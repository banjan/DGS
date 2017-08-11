UpdateRealmUserByCustomerID()
{
	lr_start_transaction("RealmUserService_UpdateRealmUserByCustomerID");

	web_service_call( "StepName=UpdateRealmUserByCustomerID_101",
		"SOAPMethod=RealmUserService|BasicHttpBinding_IRealmUserService|UpdateRealmUserByCustomerID",
		"ResponseParam=response",
		"Service=RealmUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485796101.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>2150431</CustomerID>"
				"<OpenID>https://loginqa.gamestop.com/ID/dz79PLgXNkWwlG6rsevhuw</OpenID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmUserService_UpdateRealmUserByCustomerID", LR_AUTO);

	return 0;
}

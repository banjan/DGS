GetOrganizationHierarchyByCountry()
{
	lr_start_transaction("StoreAdministrationService_GetOrganizationHierarchyByCountry");

	web_service_call( "StepName=GetOrganizationHierarchyByCountry_101",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|GetOrganizationHierarchyByCountry",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484169395.inf",
		BEGIN_ARGUMENTS,
		"Id=2",
		"IdSpecified=true",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>abcde</string>"
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>11438173-e912-4900-a126-6a586f6bb6e6</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreAdministrationService_GetOrganizationHierarchyByCountry", LR_AUTO);

	return 0;
}

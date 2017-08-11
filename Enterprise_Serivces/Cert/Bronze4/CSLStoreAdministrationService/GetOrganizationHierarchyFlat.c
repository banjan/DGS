GetOrganizationHierarchyFlat()
{
	lr_start_transaction("StoreAdministrationService_GetOrganizationHierarchyFlat");

	web_service_call( "StepName=GetOrganizationHierarchyFlat_101",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|GetOrganizationHierarchyFlat",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484170146.inf",
		BEGIN_ARGUMENTS,
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"				
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

	lr_end_transaction("StoreAdministrationService_GetOrganizationHierarchyFlat", LR_AUTO);

	return 0;
}

GetAssociationBySecuritySettings()
{
	
	lr_start_transaction("AssociationService_GetAssociationBySecuritySettings");

		web_service_call( "StepName=GetAssociationBySecuritySettings_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|GetAssociationBySecuritySettings",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482356857.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<DistinguishingFactor>abcde</DistinguishingFactor>"
				"<MaximumHashBitLength>123456789</MaximumHashBitLength>"
				"<MinimumHashBitLength>123456789</MinimumHashBitLength>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AssociationService_GetAssociationBySecuritySettings", LR_AUTO);

	return 0;
}

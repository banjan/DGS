GetAssociationBySecuritySettings()
{
	lr_start_transaction("RealmAssociationService_GetAssociationBySecuritySettings");

	web_service_call( "StepName=GetAssociationBySecuritySettings_101",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|GetAssociationBySecuritySettings",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484781513.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<DistinguishingFactor>3</DistinguishingFactor>"
				"<MaximumHashBitLength>123456789</MaximumHashBitLength>"
				"<MinimumHashBitLength>123456789</MinimumHashBitLength>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_GetAssociationBySecuritySettings", LR_AUTO);

	return 0;
}

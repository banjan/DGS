AddDeposit()
{
	lr_start_transaction("ReservationService_AddDeposit");

	web_service_call( "StepName=AddDeposit_101",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|AddDeposit",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483983363.inf",
		BEGIN_ARGUMENTS,
		"DepositAmount=5",
		"DepositAmountSpecified=true",
		"OrderReferenceNumber=33693832410462",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>238fd695-a962-4006-8483-7e3fbe2e8259</string>"
				"</Text>"
			"</CorrelationID>",
		"xml:MachineName="
			"<MachineName>"
				"<Text>" 
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ReservationService_AddDeposit", LR_AUTO);

	return 0;
}

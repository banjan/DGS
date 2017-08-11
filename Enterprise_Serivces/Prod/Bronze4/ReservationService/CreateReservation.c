CreateReservation()
{
	lr_start_transaction("ReservationService_CreateReservation");

	web_service_call( "StepName=CreateReservation_101",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|CreateReservation",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483989604.inf",
		BEGIN_ARGUMENTS,
		"xml:ReservationCreate="
			"<ReservationCreate nil=\"true\"></ReservationCreate>",
		"ReservationKeyIdSpecified=",
		"xml:MachineName="
			"<MachineName>"
				"<Text>" 
				"</Text>"
			"</MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ReservationService_CreateReservation", LR_AUTO);

	return 0;
}

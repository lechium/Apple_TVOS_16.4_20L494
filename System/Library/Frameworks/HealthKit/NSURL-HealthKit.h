//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (HealthKit)
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9 collaborationContactHandles:(id)arg10 diagnosticExtensionOptions:(unsigned long long)arg11;	// IMP=0x00600000000bb80a
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9 collaborationContactHandles:(id)arg10;	// IMP=0x00600000000bb7c5
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9;	// IMP=0x00600000000bb780
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 classification:(long long)arg4 reproducibility:(long long)arg5 keywords:(id)arg6 autoDiagnostics:(long long)arg7 attachments:(id)arg8 collaborationContactHandles:(id)arg9;	// IMP=0x00600000000bb731
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 classification:(long long)arg4 reproducibility:(long long)arg5 keywords:(id)arg6 autoDiagnostics:(long long)arg7 attachments:(id)arg8;	// IMP=0x00600000000bb6eb
+ (id)hk_tapToHealthRadarURLWithTitle:(id)arg1 description:(id)arg2 classification:(long long)arg3 reproducibility:(long long)arg4 keywords:(id)arg5 autoDiagnostics:(long long)arg6 attachments:(id)arg7;	// IMP=0x00600000000bb696
+ (id)hk_safeURLWithString:(id)arg1;	// IMP=0x00600000000bb668
+ (id)_hk_appendQueryParameterToURL:(id)arg1 forHKProfileIdentifier:(id)arg2;	// IMP=0x006000000013fb16
+ (id)_hk_urlForHKProfileIdentifier:(id)arg1;	// IMP=0x006000000013fa4c
+ (id)_hk_urlForAtrialFibrillationEventType;	// IMP=0x006000000013f9fe
+ (id)_hk_urlForElectrocardiogramType;	// IMP=0x006000000013f9b0
+ (id)_hk_urlForHealthRecordsProviderSearch;	// IMP=0x006000000013f927
+ (id)_hk_urlForViewHealthRecords;	// IMP=0x006000000013f8b2
- (id)hk_fileSizeWithError:(id *)arg1;	// IMP=0x00100000000bb432
- (_Bool)hk_isRewrittenEUDigitalCOVIDCertificateQRCodeURL;	// IMP=0x00100000000bb2e9
- (_Bool)hk_isRewrittenHealthCardQRCodeURL;	// IMP=0x00100000000bb160
- (_Bool)hk_isValidSafariViewControllerURL;	// IMP=0x00100000000bb0eb
- (_Bool)hk_hasBaseURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000baa8f
- (id)hk_valueForFirstInstanceOfParameterNamed:(id)arg1;	// IMP=0x00100000000ba86a
- (id)_hk_extractEncodedHKProfileIdentifier;	// IMP=0x001000000013fd88
@end

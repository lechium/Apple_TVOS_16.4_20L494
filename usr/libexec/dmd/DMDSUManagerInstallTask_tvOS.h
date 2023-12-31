//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PBSOSUpdateDownload, PBSOSUpdateManagerClient;

@interface DMDSUManagerInstallTask_tvOS
{
    PBSOSUpdateManagerClient *client;	// 8 = 0x8
    PBSOSUpdateDownload *lastDownload;	// 16 = 0x10
}

+ (id)_dmfInstallErrorFromSUInstallError:(id)arg1;	// IMP=0x002000000006d5b4
+ (id)_dmfDownloadErrorFromSUDownloadError:(id)arg1;	// IMP=0x001000000006d327
+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x001000000006d25a
+ (id)defaultProductKey;	// IMP=0x001000000006baee
- (void).cxx_destruct;	// IMP=0x002000000006d8de
@property(retain, nonatomic) PBSOSUpdateDownload *lastDownload; // @synthesize lastDownload;
@property(retain, nonatomic) PBSOSUpdateManagerClient *client; // @synthesize client;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;	// IMP=0x001000000006d245
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x001000000006ce89
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x001000000006cb78
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x001000000006c918
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x001000000006c51d
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000006bb7e
- (id)init;	// IMP=0x001000000006bafb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


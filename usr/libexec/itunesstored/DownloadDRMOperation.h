//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DownloadDRMOperation
{
}

- (_Bool)_unprotectMediaAsset:(id *)arg1;	// IMP=0x00200000001d6261
- (id)_sinfs;	// IMP=0x00100000001d5e9e
- (_Bool)_decryptAsset:(id *)arg1;	// IMP=0x00100000001d5aaa
- (_Bool)_checkoutRentalKeys:(id *)arg1;	// IMP=0x00100000001d547d
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x00100000001d53e1
- (void)run;	// IMP=0x00100000001d5123

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

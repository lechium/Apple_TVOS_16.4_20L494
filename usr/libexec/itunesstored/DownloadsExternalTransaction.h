//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DownloadsChangeset, ExternalDownloadState;

@interface DownloadsExternalTransaction
{
    DownloadsChangeset *_changeset;	// 16 = 0x10
    ExternalDownloadState *_externalState;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) DownloadsChangeset *changeset; // @synthesize changeset=_changeset;
- (void)unionChangeset:(id)arg1;	// IMP=0x001000000017fa19
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;	// IMP=0x001000000017f9fc
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3;	// IMP=0x001000000017f9df
- (void)setRestoreReason:(id)arg1;	// IMP=0x001000000017f9c2
- (void)setExternalPropertyValues:(id)arg1 forDownloadWithID:(long long)arg2;	// IMP=0x001000000017f858
- (void)setExternalPropertyValues:(id)arg1 forAssetWithID:(long long)arg2;	// IMP=0x001000000017f6ee
- (void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x001000000017f6d1
- (void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x001000000017f6b4
- (void)removeExternalValuesForDownloadID:(long long)arg1;	// IMP=0x001000000017f697
- (void)removeExternalValuesForAssetID:(long long)arg1;	// IMP=0x001000000017f67a
- (void)addDownloadChangeTypes:(long long)arg1;	// IMP=0x001000000017f65d
- (void)dealloc;	// IMP=0x001000000017f605
- (id)initWithSessionDescriptor:(id)arg1;	// IMP=0x001000000017f587

@end

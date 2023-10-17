//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SFAirDropAction;

@interface SDAirDropHandleriCloudDrive
{
    NSURL *_iCloudDriveURL;	// 8 = 0x8
    SFAirDropAction *_action;	// 16 = 0x10
    _Bool _useOpenWithText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000558ca
@property(nonatomic) _Bool useOpenWithText; // @synthesize useOpenWithText=_useOpenWithText;
- (void)saveCompletedItemsToiCloudDrive;	// IMP=0x00100000000558a4
- (void)openCompletedItemsWithFilesApp;	// IMP=0x001000000005589e
@property(readonly, nonatomic) SFAirDropAction *action;
- (void)updatePossibleActions;	// IMP=0x0010000000055579
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x0010000000055568
- (id)suitableContentsDescription;	// IMP=0x0010000000055557
- (long long)transferTypes;	// IMP=0x0010000000055522
- (_Bool)canHandleTransfer;	// IMP=0x001000000005550d
- (id)initWithTransfer:(id)arg1;	// IMP=0x00100000000554de

@end

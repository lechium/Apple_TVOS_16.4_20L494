//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFCollaborationItem.h"

@class CKContainerSetupInfo, LPLinkMetadata, NSArray, NSError, NSItemProvider, NSNumber, NSString, NSUUID, SFCollaborationCloudSharingResult, SFCollaborationMetadata, SFCollaborationShareOptions;

__attribute__((visibility("hidden")))
@interface _SFCKShareCollaborationItem : SFCollaborationItem
{
    _Bool _isServiceManatee;	// 152 = 0x98
    _Bool _isLoadingContainerSetupInfo;	// 153 = 0x99
    CKContainerSetupInfo *_containerSetupInfo;	// 160 = 0xa0
    LPLinkMetadata *_postSharelinkMetadata;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000548fb
@property(retain, nonatomic) LPLinkMetadata *postSharelinkMetadata; // @synthesize postSharelinkMetadata=_postSharelinkMetadata;
@property(nonatomic) _Bool isLoadingContainerSetupInfo; // @synthesize isLoadingContainerSetupInfo=_isLoadingContainerSetupInfo;
@property(retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // @synthesize containerSetupInfo=_containerSetupInfo;
@property(readonly, nonatomic) _Bool isServiceManatee; // @synthesize isServiceManatee=_isServiceManatee;
@property(readonly, nonatomic) LPLinkMetadata *linkMetadata;
- (void)_didLoadContainerSetupInfo:(id)arg1;	// IMP=0x0000000000054766
- (void)_loadCKContainerSetupInfoIfNeeded;	// IMP=0x000000000005455e
- (void)_startLoading;	// IMP=0x000000000005451d
@property(readonly, nonatomic) _Bool isLoading;
- (id)_defaultLoadingOptionsSummary;	// IMP=0x0000000000054453
- (_Bool)_canShowOptions;	// IMP=0x000000000005443e
- (id)initWithItemProvider:(id)arg1 activityItem:(id)arg2;	// IMP=0x00000000000542a2

// Remaining properties
@property(readonly, nonatomic) id activityItem;
@property(readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property(readonly, nonatomic) NSNumber *canAddPeople;
@property(retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool defaultCollaboration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) SFCollaborationMetadata *metadata;
@property(readonly, nonatomic) NSError *metadataLoadError;
@property(copy, nonatomic) NSArray *options;
@property(readonly, nonatomic) id placeholderActivityItem;
@property(readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property(readonly, copy, nonatomic) NSArray *sendCopyItems;
@property(readonly, nonatomic) id sendCopyRepresentation;
@property(copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end


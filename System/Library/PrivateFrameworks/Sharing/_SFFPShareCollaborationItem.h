//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFCollaborationItem.h"

@class LPLinkMetadata, NSArray, NSError, NSItemProvider, NSNumber, NSString, NSURL, NSUUID, SFCollaborationCloudSharingResult, SFCollaborationMetadata, SFCollaborationShareOptions;

__attribute__((visibility("hidden")))
@interface _SFFPShareCollaborationItem : SFCollaborationItem
{
    _Bool _isLocalStorage;	// 152 = 0x98
    _Bool _isiCloudDrive;	// 153 = 0x99
    _Bool _isThirdPartyFileProviderBacked;	// 154 = 0x9a
    _Bool _isShared;	// 155 = 0x9b
    _Bool _isInSharedFolder;	// 156 = 0x9c
    NSURL *_fileURL;	// 160 = 0xa0
    NSURL *_sendCopyRepresentationURL;	// 168 = 0xa8
    NSURL *_managedFileURL;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000054d83
@property(copy, nonatomic) NSURL *managedFileURL; // @synthesize managedFileURL=_managedFileURL;
@property(retain, nonatomic) NSURL *sendCopyRepresentationURL; // @synthesize sendCopyRepresentationURL=_sendCopyRepresentationURL;
@property(readonly, nonatomic) _Bool isInSharedFolder; // @synthesize isInSharedFolder=_isInSharedFolder;
@property(readonly, nonatomic) _Bool isShared; // @synthesize isShared=_isShared;
@property(readonly, nonatomic) _Bool isThirdPartyFileProviderBacked; // @synthesize isThirdPartyFileProviderBacked=_isThirdPartyFileProviderBacked;
@property(readonly, nonatomic) _Bool isiCloudDrive; // @synthesize isiCloudDrive=_isiCloudDrive;
@property(readonly, nonatomic) _Bool isLocalStorage; // @synthesize isLocalStorage=_isLocalStorage;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)loadCopyRepresentationURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000054c6f
- (id)_defaultLoadingOptionsSummary;	// IMP=0x0000000000054c12
@property(readonly, nonatomic) _Bool hasSeparateSendCopyRepresentation;
@property(readonly, nonatomic) _Bool isCollaborativeURL;
- (void)_loadSendCopyRepresentationIfNeeded;	// IMP=0x0000000000054b99
- (void)_loadMetadataIfNeeded;	// IMP=0x000000000005494e
@property(readonly, copy, nonatomic) NSString *additionalContentIdentifier;
- (id)initWithFileURL:(id)arg1 itemProvider:(id)arg2 activityItem:(id)arg3 defaultCollaboration:(_Bool)arg4 managedFileURL:(id)arg5;	// IMP=0x000000000005492c

// Remaining properties
@property(readonly, nonatomic) id activityItem;
@property(readonly, nonatomic) NSNumber *canAddPeople;
@property(retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool defaultCollaboration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) LPLinkMetadata *linkMetadata;
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


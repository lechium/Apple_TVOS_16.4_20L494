//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface RichLinkAttachmentSubstituter : NSObject
{
    _Bool _shouldSubstituteAttachments;	// 8 = 0x8
    _Bool _shouldIgnoreAppStoreMetadata;	// 9 = 0x9
    NSMutableArray *_archivedAttachments;	// 16 = 0x10
    NSArray *_attachmentsForUnarchiving;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000053a6c
@property(nonatomic) _Bool shouldIgnoreAppStoreMetadata; // @synthesize shouldIgnoreAppStoreMetadata=_shouldIgnoreAppStoreMetadata;
@property(nonatomic) _Bool shouldSubstituteAttachments; // @synthesize shouldSubstituteAttachments=_shouldSubstituteAttachments;
@property(copy, nonatomic) NSArray *attachmentsForUnarchiving; // @synthesize attachmentsForUnarchiving=_attachmentsForUnarchiving;
@property(readonly, copy, nonatomic) NSMutableArray *archivedAttachments; // @synthesize archivedAttachments=_archivedAttachments;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;	// IMP=0x00000000000539de
- (id)applyAttachmentSubstitutionForObject:(id)arg1;	// IMP=0x000000000005338a
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;	// IMP=0x000000000005307d
- (id)init;	// IMP=0x000000000005300f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


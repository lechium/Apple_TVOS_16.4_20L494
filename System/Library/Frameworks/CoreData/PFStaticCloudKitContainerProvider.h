//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKContainer;

__attribute__((visibility("hidden")))
@interface PFStaticCloudKitContainerProvider
{
    CKContainer *_container;	// 8 = 0x8
}

@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)containerWithIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x00000000001d47b7
- (id)containerWithIdentifier:(id)arg1;	// IMP=0x00000000001d46e2
- (void)dealloc;	// IMP=0x00000000001d46a0
- (id)initWithContainer:(id)arg1;	// IMP=0x00000000001d4649

@end

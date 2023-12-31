//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityCollection.h"

@class TVHKDAAPBrowseMediaEntityCollectionIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPBrowseMediaEntityCollection : TVHKMediaEntityCollection
{
    TVHKMediaEntityType *_type;	// 8 = 0x8
    TVHKDAAPBrowseMediaEntityCollectionIdentifier *_browseMediaEntityCollectionIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000045e14
@property(copy, nonatomic) TVHKDAAPBrowseMediaEntityCollectionIdentifier *browseMediaEntityCollectionIdentifier; // @synthesize browseMediaEntityCollectionIdentifier=_browseMediaEntityCollectionIdentifier;
- (id)type;	// IMP=0x0000000000045de1
- (unsigned long long)imageNonPersistentID;	// IMP=0x0000000000045dd9
- (unsigned long long)persistentID;	// IMP=0x0000000000045dd1
- (unsigned long long)nonPersistentID;	// IMP=0x0000000000045dc9
- (unsigned long long)protocol;	// IMP=0x0000000000045dc1
- (id)identifier;	// IMP=0x0000000000045daf
- (id)initWithMediaCategoryType:(unsigned long long)arg1 mediaEntityCollectionType:(unsigned long long)arg2 mediaServerIdentifier:(id)arg3 requestedProperties:(id)arg4 entity:(id)arg5;	// IMP=0x0000000000045c12
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x0000000000045ba3

@end


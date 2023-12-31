//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GEOAnalyticsPipelineCuratedCollectionQueueElem
{
    unsigned long long _elemType;	// 16 = 0x10
    unsigned long long _collectionId;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long collectionId; // @synthesize collectionId=_collectionId;
@property(readonly, nonatomic) unsigned long long elemType; // @synthesize elemType=_elemType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002cd80
- (unsigned long long)hash;	// IMP=0x001000000002cd6f
- (id)copy;	// IMP=0x001000000002cd2a
- (id)initWithType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 createTime:(id)arg3;	// IMP=0x001000000002cc9b

@end


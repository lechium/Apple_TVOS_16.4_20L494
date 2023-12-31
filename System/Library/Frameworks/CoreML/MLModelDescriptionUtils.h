//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelDescriptionUtils : NSObject
{
}

+ (_Bool)validateAllFeatureDescriptions:(id)arg1 hasAnyFeatureTypeIn:(id)arg2 minimalCount:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 debugLabel:(id)arg5 error:(id *)arg6;	// IMP=0x0080000000173b4b
+ (_Bool)saveModelDescription:(id)arg1 toSpecification:(void *)arg2 error:(id *)arg3;	// IMP=0x0080000000173a36
+ (void *)createModelDescription:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001733ab
+ (void)copyFeatureDescriptionFrom:(id)arg1 to:(void *)arg2 error:(id *)arg3;	// IMP=0x0080000000173220
+ (void *)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000172f65
+ (void *)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000172df0
+ (void *)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000172cbd
+ (void *)getArrayFeatureTypeFromConstraint:(id)arg1;	// IMP=0x0080000000172a89
+ (void *)getImageFeatureTypeFromConstraint:(id)arg1;	// IMP=0x00800000001729d0
+ (void *)createMetaData:(id)arg1;	// IMP=0x0080000000172181

@end


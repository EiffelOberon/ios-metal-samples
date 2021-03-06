//
//  MBEGaussianBlur2DFilter.h
//  ImageProcessing
//
//  Created by Warren Moore on 10/8/14.
//  Copyright (c) 2014 Metal By Example. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ImageFilter.h"

@interface GaussianBlur2DFilter : ImageFilter

@property (nonatomic, assign) float radius;
@property (nonatomic, assign) float sigma;

+ (instancetype)filterWithRadius:(float)radius context:(ComputeContext *)context;

@end


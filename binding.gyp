

{
    'targets': [
    {
        'target_name': 'hello',
        'sources': [ 
        'src/hello.cc'
        ]
    },
    {
        'target_name': 'test',
        'sources': [
            'src/test.cc', 
            ],
        'conditions': [
        ['OS=="linux"', {
            'cflags': [
                '<!@(pkg-config --cflags QtCore QtGui QtTest)'
                ],
            'ldflags': [
                '<!@(pkg-config --libs-only-L --libs-only-other QtCore QtGui QtTest)'
                ],
            'libraries': [
                '<!@(pkg-config --libs-only-l QtCore QtGui QtTest)'
                ]
        }]
        ]
    }
    ]


}

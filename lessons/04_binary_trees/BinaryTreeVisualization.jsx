import React, { useState } from 'react';

// A beautiful journey into the world of binary trees through interactive visualization!
const BinaryTreeVisualization = () => {
  const [hoveredNode, setHoveredNode] = useState(null);
  
  // Our tree structure - like a map of stars in a constellation
  const treeData = {
    nodes: [
      { id: 1, value: 50, x: 400, y: 50, level: 0 },  // Our root, like the trunk of a great oak
      { id: 2, value: 30, x: 200, y: 150, level: 1 }, // Left branch
      { id: 3, value: 70, x: 600, y: 150, level: 1 }, // Right branch
      { id: 4, value: 20, x: 100, y: 250, level: 2 }, // The leaves of our tree
      { id: 5, value: 40, x: 300, y: 250, level: 2 },
      { id: 6, value: 60, x: 500, y: 250, level: 2 },
      { id: 7, value: 80, x: 700, y: 250, level: 2 }
    ],
    edges: [
      { from: 1, to: 2 }, // Connections, like the branches of our tree
      { from: 1, to: 3 },
      { from: 2, to: 4 },
      { from: 2, to: 5 },
      { from: 3, to: 6 },
      { from: 3, to: 7 }
    ]
  };

  // Helper functions to make our visualization come alive
  const getNodeById = (id) => treeData.nodes.find(node => node.id === id);
  
  // Colors that represent the depth of our tree - like layers of a forest
  const getLevelColor = (level) => {
    const colors = ['#4CAF50', '#66BB6A', '#81C784'];
    return colors[level] || colors[colors.length - 1];
  };

  return (
    <div className="w-full p-8 bg-white rounded-xl shadow-lg">
      <h2 className="text-3xl font-bold mb-6 text-green-600">Binary Tree Visualization</h2>
      
      <div className="relative w-full h-96">
        <svg className="w-full h-full" viewBox="0 0 800 400">
          {/* Our tree's connections */}
          {treeData.edges.map((edge, index) => {
            const fromNode = getNodeById(edge.from);
            const toNode = getNodeById(edge.to);
            return (
              <line
                key={`edge-${index}`}
                x1={fromNode.x}
                y1={fromNode.y}
                x2={toNode.x}
                y2={toNode.y}
                stroke={hoveredNode === edge.from || hoveredNode === edge.to ? '#2E7D32' : '#4CAF50'}
                strokeWidth={hoveredNode === edge.from || hoveredNode === edge.to ? 3 : 2}
                className="transition-all duration-300"
              />
            );
          })}

          {/* Our tree's nodes - each one a unique part of our structure */}
          {treeData.nodes.map((node) => (
            <g
              key={`node-${node.id}`}
              className="transition-transform duration-300"
              onMouseEnter={() => setHoveredNode(node.id)}
              onMouseLeave={() => setHoveredNode(null)}
              transform={hoveredNode === node.id ? `translate(0, -5)` : ''}
            >
              <circle
                cx={node.x}
                cy={node.y}
                r={30}
                fill={getLevelColor(node.level)}
                className="cursor-pointer transition-all duration-300"
                style={{
                  filter: hoveredNode === node.id ? 'brightness(1.2)' : 'none'
                }}
              />
              <text
                x={node.x}
                y={node.y}
                textAnchor="middle"
                dy="0.3em"
                fill="white"
                className="text-lg select-none"
              >
                {node.value}
              </text>
            </g>
          ))}
        </svg>
      </div>

      {/* Information panels that reveal the tree's properties */}
      <div className="mt-8 grid grid-cols-1 md:grid-cols-3 gap-4">
        <div className="p-4 bg-green-50 rounded-lg">
          <h3 className="font-bold text-green-700 mb-2">Tree Properties</h3>
          <p>Height: $$h = 3$$ levels</p>
          <p>Total nodes: $$n = 7$$</p>
        </div>
        <div className="p-4 bg-green-50 rounded-lg">
          <h3 className="font-bold text-green-700 mb-2">Node Types</h3>
          <p>Root node: $$50$$</p>
          <p>Leaf nodes: $$4$$</p>
        </div>
        <div className="p-4 bg-green-50 rounded-lg">
          <h3 className="font-bold text-green-700 mb-2">Mathematical Beauty</h3>
          <p>Max nodes at level $$i$$: $$2^i$$</p>
          <p>Height calculation: $$h = \max(h_L, h_R) + 1$$</p>
        </div>
      </div>
    </div>
  );
};

export default BinaryTreeVisualization;